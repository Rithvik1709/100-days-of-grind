# Day 13 - Decision Trees: Concept & Implementation

## 📝 Overview
Decision Trees are supervised learning models used for both classification and regression tasks.  
They work by recursively splitting data into subgroups based on the most significant feature.

## 📌 Topics Covered
- Decision Tree for Classification
- Decision Tree for Regression
- Pruning & Overfitting Control

## 📂 Files
- `complex_dataset.csv` - Sample dataset.
- `decision_tree_classification.py` - Implements a decision tree for classification.
- `decision_tree_regression.py` - Implements a decision tree for regression.

## 🌳 Decision Tree Working:
1. Select the **best feature** to split the data (using Gini Impurity or Entropy).
2. Recursively divide the dataset until a stopping condition is met.
3. Assign leaf nodes based on the majority class (classification) or mean value (regression).

## 📊 Entropy Formula:
\[
H(X) = - \sum_{i=1}^{n} P(x_i) \log_2 P(x_i)
\]

## 📊 Gini Impurity Formula:
\[
Gini = 1 - \sum_{i=1}^{n} P(x_i)^2
\]

## ⚡ Running the Code
```bash
pip install numpy pandas matplotlib scikit-learn
python decision_tree_classification.py
python decision_tree_regression.py
