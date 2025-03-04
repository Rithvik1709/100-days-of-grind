# Day 16 - Support Vector Machines (SVM)

## 📝 Overview
Support Vector Machines (SVM) are powerful supervised learning models used for classification and regression.  
They work by finding the optimal hyperplane that best separates the data.

## 📌 Topics Covered
- SVM for Classification (Linear & Non-Linear)
- SVM for Regression (SVR)
- Kernel Trick: Linear, Polynomial, RBF

## 📂 Files
- `dataset.csv` - Sample dataset.
- `svm_classification.py` - Implements SVM for classification.
- `svm_regression.py` - Implements SVM for regression.

## 🌟 SVM Key Concepts:
- **Hyperplane:** A decision boundary separating classes.
- **Margin:** The distance between support vectors and the hyperplane.
- **Kernels:** Transform data to higher dimensions for better separation.

## 📊 SVM Kernel Functions:
| Kernel | Equation | Use Case |
|--------|----------|----------|
| **Linear** | \( K(x, y) = x \cdot y \) | Linearly separable data |
| **Polynomial** | \( K(x, y) = (x \cdot y + c)^d \) | Complex boundaries |
| **RBF (Gaussian)** | \( K(x, y) = e^{-\gamma ||x - y||^2} \) | Non-linear separation |

## ⚡ Running the Code
```bash
pip install numpy pandas matplotlib scikit-learn
python svm_classification.py
python svm_regression.py
