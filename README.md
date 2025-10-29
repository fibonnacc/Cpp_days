## 🎵 Polymorphism with Pure Virtual Functions in C++

This example demonstrates how **polymorphism** allows different objects (`Piano`, `Accordion`) to share the same interface (`Instrument`) but behave differently when executing the same method (`makeSound()`).

---
### 🧠 Concept Summary

| Concept                   | Description                                                                                                                               |
| ------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |## 🎵 Polymorphism with Pure Virtual Functions in C++

This example demonstrates how **polymorphism** allows different objects (`Piano`, `Accordion`) to share the same interface (`Instrument`) but behave differently when executing the same method (`makeSound()`).

---


### 🧠 Concept Summary

| Concept                   | Description                                                                                                                               |
| ------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |
| **Virtual Function**      | Allows a derived class to redefine a function from the base class. The correct version is chosen *at runtime*.                            |
| **Pure Virtual Function** | Declared with `= 0`; makes the base class **abstract** — you can’t instantiate it directly.                                               |
| **Polymorphism**          | The ability for one pointer type (`Instrument*`) to call different function implementations based on the actual object type it points to. |

---

### 🧩 Code Overview

```cpp
class Instrument {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

class Accordion : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Accordion playing...\n";
    }
};

class Piano : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Piano playing...\n";
    }
};

int main() {
  Instrument* instruments[80];

  for (int i = 0; i < 80; i++) {
    if (i % 2 == 0) {
      instruments[i] = new Piano();
    }
    else {
      instruments[i] = new Accordion();
    }
  }

  for (int i = 0; i < 80; i++) {
    instruments[i]->makeSound();
    delete instruments[i];
  }
}
```

Here, `Instrument` defines the **interface**, and both `Accordion` and `Piano` **implement** the sound behavior differently.

---

### ⚙️ Runtime Behavior (Animation Style)

When your program runs:

```
🎼 Creating instruments...

Slot[0] → 🎹 Piano
Slot[1] → 🪗 Accordion
Slot[2] → 🎹 Piano
Slot[3] → 🪗 Accordion
     ⋮

🎶 Playing all instruments...
---------------------------------
[0] → Piano playing...
[1] → Accordion playing...
[2] → Piano playing...
[3] → Accordion playing...
      ⋮
```

💡 Even though each object is stored as an `Instrument*`,
the **correct derived class function** (`Piano::makeSound()` or `Accordion::makeSound()`) is called dynamically.

---

### 🧠 What You Learn from This Code

* 🔸 How to declare and use a **pure virtual function** to enforce a common interface.
* 🔸 How **virtual functions** enable **runtime polymorphism** (dynamic dispatch).
* 🔸 Why you **can’t instantiate** an abstract class directly (`Instrument` in this case).
* 🔸 How arrays of base-class pointers can manage many different derived objects seamlessly.
* 🔸 The power of designing extensible systems — adding a new instrument only requires defining its `makeSound()`.

---

### 💡 Bonus Tip

You could extend this system easily:

```cpp
class Guitar : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Guitar strumming...\n";
    }
};
```

Now every place using `Instrument*` will automatically support `Guitar` without changing other code.
That’s **true polymorphism**.

---

### 🧩 Visualization of Memory & Polymorphism

```
+-------------------+
| Instrument (Base) |  <-- contains virtual table pointer (vtable)
+-------------------+
          |
          v
+-------------------+
| Piano::makeSound()|  <-- dynamic dispatch at runtime
+-------------------+

+-------------------+
| Accordion::makeSound()|
+-------------------+
```

---

### 🚀 Final Takeaway

> **Pure virtual functions** make your base class an *interface*.
> **Virtual functions** make your program *dynamic and flexible*.
> Together, they form the foundation of **runtime polymorphism** in C++.
## 🎵 Polymorphism with Pure Virtual Functions in C++

This example demonstrates how **polymorphism** allows different objects (`Piano`, `Accordion`) to share the same interface (`Instrument`) but behave differently when executing the same method (`makeSound()`).

---


### 🧠 Concept Summary

| Concept                   | Description                                                                                                                               |
| ------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |
| **Virtual Function**      | Allows a derived class to redefine a function from the base class. The correct version is chosen *at runtime*.                            |
| **Pure Virtual Function** | Declared with `= 0`; makes the base class **abstract** — you can’t instantiate it directly.                                               |
| **Polymorphism**          | The ability for one pointer type (`Instrument*`) to call different function implementations based on the actual object type it points to. |

---

### 🧩 Code Overview

```cpp
class Instrument {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

class Accordion : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Accordion playing...\n";
    }
};

class Piano : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Piano playing...\n";
    }
};

int main() {
  Instrument* instruments[80];

  for (int i = 0; i < 80; i++) {
    if (i % 2 == 0) {
      instruments[i] = new Piano();
    }
    else {
      instruments[i] = new Accordion();
    }
  }

  for (int i = 0; i < 80; i++) {
    instruments[i]->makeSound();
    delete instruments[i];
  }
}
```

Here, `Instrument` defines the **interface**, and both `Accordion` and `Piano` **implement** the sound behavior differently.

---

### ⚙️ Runtime Behavior (Animation Style)

When your program runs:

```
🎼 Creating instruments...

Slot[0] → 🎹 Piano
Slot[1] → 🪗 Accordion
Slot[2] → 🎹 Piano
Slot[3] → 🪗 Accordion
     ⋮

🎶 Playing all instruments...
---------------------------------
[0] → Piano playing...
[1] → Accordion playing...
[2] → Piano playing...
[3] → Accordion playing...
      ⋮
```

💡 Even though each object is stored as an `Instrument*`,
the **correct derived class function** (`Piano::makeSound()` or `Accordion::makeSound()`) is called dynamically.

---

### 🧠 What You Learn from This Code

* 🔸 How to declare and use a **pure virtual function** to enforce a common interface.
* 🔸 How **virtual functions** enable **runtime polymorphism** (dynamic dispatch).
* 🔸 Why you **can’t instantiate** an abstract class directly (`Instrument` in this case).
* 🔸 How arrays of base-class pointers can manage many different derived objects seamlessly.
* 🔸 The power of designing extensible systems — adding a new instrument only requires defining its `makeSound()`.

---

### 💡 Bonus Tip

You could extend this system easily:

```cpp
class Guitar : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Guitar strumming...\n";
    }
};
```

Now every place using `Instrument*` will automatically support `Guitar` without changing other code.
That’s **true polymorphism**.

---

### 🧩 Visualization of Memory & Polymorphism

```
+-------------------+
| Instrument (Base) |  <-- contains virtual table pointer (vtable)
+-------------------+
          |
          v
+-------------------+
| Piano::makeSound()|  <-- dynamic dispatch at runtime
+-------------------+

+-------------------+
| Accordion::makeSound()|
+-------------------+
```

---

### 🚀 Final Takeaway

> **Pure virtual functions** make your base class an *interface*.
> **Virtual functions** make your program *dynamic and flexible*.
> Together, they form the foundation of **runtime polymorphism** in C++.
## 🎵 Polymorphism with Pure Virtual Functions in C++

This example demonstrates how **polymorphism** allows different objects (`Piano`, `Accordion`) to share the same interface (`Instrument`) but behave differently when executing the same method (`makeSound()`).

---


### 🧠 Concept Summary

| Concept                   | Description                                                                                                                               |
| ------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |
| **Virtual Function**      | Allows a derived class to redefine a function from the base class. The correct version is chosen *at runtime*.                            |
| **Pure Virtual Function** | Declared with `= 0`; makes the base class **abstract** — you can’t instantiate it directly.                                               |
| **Polymorphism**          | The ability for one pointer type (`Instrument*`) to call different function implementations based on the actual object type it points to. |

---

### 🧩 Code Overview

```cpp
class Instrument {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

class Accordion : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Accordion playing...\n";
    }
};

class Piano : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Piano playing...\n";
    }
};

int main() {
  Instrument* instruments[80];

  for (int i = 0; i < 80; i++) {
    if (i % 2 == 0) {
      instruments[i] = new Piano();
    }
    else {
      instruments[i] = new Accordion();
    }
  }

  for (int i = 0; i < 80; i++) {
    instruments[i]->makeSound();
    delete instruments[i];
  }
}
```

Here, `Instrument` defines the **interface**, and both `Accordion` and `Piano` **implement** the sound behavior differently.

---

### ⚙️ Runtime Behavior (Animation Style)

When your program runs:

```
🎼 Creating instruments...

Slot[0] → 🎹 Piano
Slot[1] → 🪗 Accordion
Slot[2] → 🎹 Piano
Slot[3] → 🪗 Accordion
     ⋮

🎶 Playing all instruments...
---------------------------------
[0] → Piano playing...
[1] → Accordion playing...
[2] → Piano playing...
[3] → Accordion playing...
      ⋮
```

💡 Even though each object is stored as an `Instrument*`,
the **correct derived class function** (`Piano::makeSound()` or `Accordion::makeSound()`) is called dynamically.

---

### 🧠 What You Learn from This Code

* 🔸 How to declare and use a **pure virtual function** to enforce a common interface.
* 🔸 How **virtual functions** enable **runtime polymorphism** (dynamic dispatch).
* 🔸 Why you **can’t instantiate** an abstract class directly (`Instrument` in this case).
* 🔸 How arrays of base-class pointers can manage many different derived objects seamlessly.
* 🔸 The power of designing extensible systems — adding a new instrument only requires defining its `makeSound()`.

---

### 💡 Bonus Tip

You could extend this system easily:

```cpp
class Guitar : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Guitar strumming...\n";
    }
};
```

Now every place using `Instrument*` will automatically support `Guitar` without changing other code.
That’s **true polymorphism**.

---

### 🧩 Visualization of Memory & Polymorphism

```
+-------------------+
| Instrument (Base) |  <-- contains virtual table pointer (vtable)
+-------------------+
          |
          v
+-------------------+
| Piano::makeSound()|  <-- dynamic dispatch at runtime
+-------------------+

+-------------------+
| Accordion::makeSound()|
+-------------------+
```

---

### 🚀 Final Takeaway

> **Pure virtual functions** make your base class an *interface*.
> **Virtual functions** make your program *dynamic and flexible*.
> Together, they form the foundation of **runtime polymorphism** in C++.
## 🎵 Polymorphism with Pure Virtual Functions in C++

This example demonstrates how **polymorphism** allows different objects (`Piano`, `Accordion`) to share the same interface (`Instrument`) but behave differently when executing the same method (`makeSound()`).

---


### 🧠 Concept Summary

| Concept                   | Description                                                                                                                               |
| ------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |
| **Virtual Function**      | Allows a derived class to redefine a function from the base class. The correct version is chosen *at runtime*.                            |
| **Pure Virtual Function** | Declared with `= 0`; makes the base class **abstract** — you can’t instantiate it directly.                                               |
| **Polymorphism**          | The ability for one pointer type (`Instrument*`) to call different function implementations based on the actual object type it points to. |

---

### 🧩 Code Overview

```cpp
class Instrument {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

class Accordion : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Accordion playing...\n";
    }
};

class Piano : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Piano playing...\n";
    }
};

int main() {
  Instrument* instruments[80];

  for (int i = 0; i < 80; i++) {
    if (i % 2 == 0) {
      instruments[i] = new Piano();
    }
    else {
      instruments[i] = new Accordion();
    }
  }

  for (int i = 0; i < 80; i++) {
    instruments[i]->makeSound();
    delete instruments[i];
  }
}
```

Here, `Instrument` defines the **interface**, and both `Accordion` and `Piano` **implement** the sound behavior differently.

---

### ⚙️ Runtime Behavior (Animation Style)

When your program runs:

```
🎼 Creating instruments...

Slot[0] → 🎹 Piano
Slot[1] → 🪗 Accordion
Slot[2] → 🎹 Piano
Slot[3] → 🪗 Accordion
     ⋮

🎶 Playing all instruments...
---------------------------------
[0] → Piano playing...
[1] → Accordion playing...
[2] → Piano playing...
[3] → Accordion playing...
      ⋮
```

💡 Even though each object is stored as an `Instrument*`,
the **correct derived class function** (`Piano::makeSound()` or `Accordion::makeSound()`) is called dynamically.

---

### 🧠 What You Learn from This Code

* 🔸 How to declare and use a **pure virtual function** to enforce a common interface.
* 🔸 How **virtual functions** enable **runtime polymorphism** (dynamic dispatch).
* 🔸 Why you **can’t instantiate** an abstract class directly (`Instrument` in this case).
* 🔸 How arrays of base-class pointers can manage many different derived objects seamlessly.
* 🔸 The power of designing extensible systems — adding a new instrument only requires defining its `makeSound()`.

---

### 💡 Bonus Tip

You could extend this system easily:

```cpp
class Guitar : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Guitar strumming...\n";
    }
};
```

Now every place using `Instrument*` will automatically support `Guitar` without changing other code.
That’s **true polymorphism**.

---

### 🧩 Visualization of Memory & Polymorphism

```
+-------------------+
| Instrument (Base) |  <-- contains virtual table pointer (vtable)
+-------------------+
          |
          v
+-------------------+
| Piano::makeSound()|  <-- dynamic dispatch at runtime
+-------------------+

+-------------------+
| Accordion::makeSound()|
+-------------------+
```

---

### 🚀 Final Takeaway

> **Pure virtual functions** make your base class an *interface*.
> **Virtual functions** make your program *dynamic and flexible*.
> Together, they form the foundation of **runtime polymorphism** in C++.

| **Virtual Function**      | Allows a derived class to redefine a function from the base class. The correct version is chosen *at runtime*.                            |
| **Pure Virtual Function** | Declared with `= 0`; makes the base class **abstract** — you can’t instantiate it directly.                                               |
| **Polymorphism**          | The ability for one pointer type (`Instrument*`) to call different function implementations based on the actual object type it points to. |

---

### 🧩 Code Overview

```cpp
class Instrument {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

class Accordion : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Accordion playing...\n";
    }
};

class Piano : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Piano playing...\n";
    }
};

int main() {
  Instrument* instruments[80];

  for (int i = 0; i < 80; i++) {
    if (i % 2 == 0) {
      instruments[i] = new Piano();
    }
    else {
      instruments[i] = new Accordion();
    }
  }

  for (int i = 0; i < 80; i++) {
    instruments[i]->makeSound();
    delete instruments[i];
  }
}
```

Here, `Instrument` defines the **interface**, and both `Accordion` and `Piano` **implement** the sound behavior differently.

---

### ⚙️ Runtime Behavior (Animation Style)

When your program runs:

```
🎼 Creating instruments...

Slot[0] → 🎹 Piano
Slot[1] → 🪗 Accordion
Slot[2] → 🎹 Piano
Slot[3] → 🪗 Accordion
     ⋮

🎶 Playing all instruments...
---------------------------------
[0] → Piano playing...
[1] → Accordion playing...
[2] → Piano playing...
[3] → Accordion playing...
      ⋮
```

💡 Even though each object is stored as an `Instrument*`,
the **correct derived class function** (`Piano::makeSound()` or `Accordion::makeSound()`) is called dynamically.

---

### 🧠 What You Learn from This Code

* 🔸 How to declare and use a **pure virtual function** to enforce a common interface.
* 🔸 How **virtual functions** enable **runtime polymorphism** (dynamic dispatch).
* 🔸 Why you **can’t instantiate** an abstract class directly (`Instrument` in this case).
* 🔸 How arrays of base-class pointers can manage many different derived objects seamlessly.
* 🔸 The power of designing extensible systems — adding a new instrument only requires defining its `makeSound()`.

---

### 💡 Bonus Tip

You could extend this system easily:

```cpp
class Guitar : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Guitar strumming...\n";
    }
};
```

Now every place using `Instrument*` will automatically support `Guitar` without changing other code.
That’s **true polymorphism**.

---

### 🧩 Visualization of Memory & Polymorphism

```
+-------------------+
| Instrument (Base) |  <-- contains virtual table pointer (vtable)
+-------------------+
          |
          v
+-------------------+
| Piano::makeSound()|  <-- dynamic dispatch at runtime
+-------------------+

+-------------------+
| Accordion::makeSound()|
+-------------------+
```

---

### 🚀 Final Takeaway

> **Pure virtual functions** make your base class an *interface*.
> **Virtual functions** make your program *dynamic and flexible*.
>## 🎵 Polymorphism with Pure Virtual Functions in C++

This example demonstrates how **polymorphism** allows different objects (`Piano`, `Accordion`) to share the same interface (`Instrument`) but behave differently when executing the same method (`makeSound()`).

---


### 🧠 Concept Summary

| Concept                   | Description                                                                                                                               |
| ------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |
| **Virtual Function**      | Allows a derived class to redefine a function from the base class. The correct version is chosen *at runtime*.                            |
| **Pure Virtual Function** | Declared with `= 0`; makes the base class **abstract** — you can’t instantiate it directly.                                               |
| **Polymorphism**          | The ability for one pointer type (`Instrument*`) to call different function implementations based on the actual object type it points to. |

---

### 🧩 Code Overview

```cpp
class Instrument {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

class Accordion : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Accordion playing...\n";
    }
};

class Piano : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Piano playing...\n";
    }
};

int main() {
  Instrument* instruments[80];

  for (int i = 0; i < 80; i++) {
    if (i % 2 == 0) {
      instruments[i] = new Piano();
    }
    else {
      instruments[i] = new Accordion();
    }
  }

  for (int i = 0; i < 80; i++) {
    instruments[i]->makeSound();
    delete instruments[i];
  }
}
```

Here, `Instrument` defines the **interface**, and both `Accordion` and `Piano` **implement** the sound behavior differently.

---

### ⚙️ Runtime Behavior (Animation Style)

When your program runs:

```
🎼 Creating instruments...

Slot[0] → 🎹 Piano
Slot[1] → 🪗 Accordion
Slot[2] → 🎹 Piano
Slot[3] → 🪗 Accordion
     ⋮

🎶 Playing all instruments...
---------------------------------
[0] → Piano playing...
[1] → Accordion playing...
[2] → Piano playing...
[3] → Accordion playing...
      ⋮
```

💡 Even though each object is stored as an `Instrument*`,
the **correct derived class function** (`Piano::makeSound()` or `Accordion::makeSound()`) is called dynamically.

---

### 🧠 What You Learn from This Code

* 🔸 How to declare and use a **pure virtual function** to enforce a common interface.
* 🔸 How **virtual functions** enable **runtime polymorphism** (dynamic dispatch).
* 🔸 Why you **can’t instantiate** an abstract class directly (`Instrument` in this case).
* 🔸 How arrays of base-class pointers can manage many different derived objects seamlessly.
* 🔸 The power of designing extensible systems — adding a new instrument only requires defining its `makeSound()`.

---

### 💡 Bonus Tip

You could extend this system easily:

```cpp
class Guitar : public Instrument {
public:
    void makeSound() const override {
        std::cout << "Guitar strumming...\n";
    }
};
```

Now every place using `Instrument*` will automatically support `Guitar` without changing other code.
That’s **true polymorphism**.

---

### 🧩 Visualization of Memory & Polymorphism

```
+-------------------+
| Instrument (Base) |  <-- contains virtual table pointer (vtable)
+-------------------+
          |
          v
+-------------------+
| Piano::makeSound()|  <-- dynamic dispatch at runtime
+-------------------+

+-------------------+
| Accordion::makeSound()|
+-------------------+
```

---

### 🚀 Final Takeaway

> **Pure virtual functions** make your base class an *interface*.
> **Virtual functions** make your program *dynamic and flexible*.
> Together, they form the foundation of **runtime polymorphism** in C++.
 Together, they form the foundation of **runtime polymorphism** in C++.
