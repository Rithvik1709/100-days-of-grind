# Day 11 - Polynomial Regression & Ridge/Lasso Regression

## 📝 Overview
Polynomial Regression is an extension of linear regression where we fit a polynomial equation to capture non-linearity in data.  
Ridge and Lasso regression are regularized linear regression techniques that prevent overfitting by adding a penalty term.

## 📌 Topics Covered
- Polynomial Regression
- Ridge Regression (L2 Regularization)
- Lasso Regression (L1 Regularization)

## 📂 Files
- `dataset.csv` - Sample dataset for polynomial regression.
- `polynomial_regression.py` - Implements polynomial regression.
- `ridge_lasso_regression.py` - Implements Ridge and Lasso regression.

## 📊 Polynomial Regression Formula:
\[
y = b_0 + b_1x + b_2x^2 + b_3x^3 + ... + b_nx^n
\]

## ⚡ Running the Code
```bash
pip install numpy pandas matplotlib scikit-learn
python polynomial_regression.py
python ridge_lasso_regression.py
