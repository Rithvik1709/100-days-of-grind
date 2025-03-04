# Day 13 - Logistic Regression & Softmax Regression

## 📝 Overview
Logistic Regression is a classification algorithm used for binary classification tasks, while Softmax Regression is an extension for multi-class classification.

## 📌 Topics Covered
- Logistic Regression (Binary Classification)
- Softmax Regression (Multi-class Classification)
- Cost Function (Cross-Entropy Loss)

## 📂 Files
- `dataset.csv` - Sample dataset.
- `logistic_regression.py` - Implements logistic regression.
- `softmax_regression.py` - Implements softmax regression.

## 📊 Logistic Regression Formula:
\[
h_\theta(x) = \frac{1}{1 + e^{-\theta^T x}}
\]

## 🔢 Softmax Regression Formula

Softmax Regression is used for multi-class classification. It converts raw scores (logits) into probabilities.

The softmax function is defined as:

\[
P(y=i|x) = \frac{e^{\theta_i^T x}}{\sum_{j} e^{\theta_j^T x}}
\]

Where:
- \( P(y=i|x) \) is the probability of class \( i \) given input \( x \).
- \( \theta_i \) is the weight vector for class \( i \).
- \( x \) is the feature vector.
- \( \sum_{j} e^{\theta_j^T x} \) ensures that the probabilities sum to 1.

This function helps in assigning probabilities to multiple classes, making it suitable for classification tasks.


## ⚡ Running the Code
```bash
pip install numpy pandas matplotlib scikit-learn
python logistic_regression.py
python softmax_regression.py
