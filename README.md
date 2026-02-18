<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

<p align="center">
  <a href="https://www.uniwa.gr" target="_blank">University of West Attica</a> ·
  <a href="https://ice.uniwa.gr" target="_blank">Department of Computer Engineering and Informatics</a>
</p>

---

<p align="center">
  <strong>Object-Oriented Programming</strong>
</p>

<h1 align="center">
  Introduction to C++ Classes
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<hr/>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Cleo Sgouropoulou, Professor<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a> ·
  <a href="https://www.linkedin.com/in/cleo-sgouropoulou-51683525/" target="_blank">LinkedIn</a>
</p>

<p align="center">
  Co-supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

</hr>

---

<p align="center">
  Athens, May 2022
</p>

---

<p align="center">
  <img src="https://grandidierite.github.io/assets/img/cppclasses.jpg" width="250"/>
</p>

---

# README

## Introduction to C++ Classes

This repository contains a **C++ implementation of a `Student` class**. The class encapsulates attributes related to a student's academic information and provides methods to manipulate and display this information. The implementation demonstrates **object-oriented programming (OOP) concepts**, including attributes, methods, access modifiers, constructors, destructors, and operator overloading.

---

## Table of Contents

| Section | Folder/File            | Description                                 |
| ------: | ---------------------- | ------------------------------------------- |
|       1 | `assign/`              | Assignment material for the Class workshop  |
|     1.1 | `assign/Exercise2.png` | Exercise description in English             |
|     1.2 | `assign/Άσκηση2.png`   | Exercise description in Greek               |
|       2 | `src/`                 | Source code files for class-based exercises |
|     2.1 | `src/main.cpp`         | Main C++ program                            |
|     2.2 | `src/STUDENT.cpp`      | Implementation of the STUDENT class         |
|     2.3 | `src/STUDENT.h`        | Header file for the STUDENT class           |
|       3 | `README.md`            | Repository overview and usage instructions  |

---

## 1. Project Overview

The program allows:

- Creating and managing `Student` objects
- Reading and modifying student information
- Displaying student data in a structured format
- Demonstrating OOP principles like encapsulation, constructors, and operator overloading

---

## 2. Class Features

### 2.1 Attributes

The `Student` class contains the following private attributes:

- **AM (char \*)**: Student registration number
- **First Name (string)**: Student’s first name
- **Current Semester (unsigned int)**: Current semester of the student

### 2.2 Constructors

The class supports multiple constructors:

1. **AM & First Name Constructor**: Initializes registration number and first name; current semester set to 1
2. **Full Constructor**: Initializes all attributes with provided values
3. **Copy Constructor**: Initializes a new `Student` object using another `Student` object

### 2.3 Methods

- **Getters & Setters**: Retrieve and modify attribute values
- **Print**: Displays all attributes in one line to any output stream
- **IncreaseSemester**: Increments the current semester by 1

---

## 3. Conclusion

This project demonstrates fundamental OOP concepts in C++ through a practical example of managing student information, highlighting encapsulation, constructors, dynamic memory handling, and method implementation.
