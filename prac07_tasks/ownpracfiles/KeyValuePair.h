#ifndef _KEY_VALUE_PAIR_H
#define _KEY_VALUE_PAIR_H
#include <string>

template <typename K, typename V>
class KeyValuePair
{
private:
    K m_key;
    V m_value;

public:
    KeyValuePair(const K &key, const V &value);
    ~KeyValuePair(){};
    // KeyValuePair() = default;
    // KeyValuePair(const K &key, const V &value);
    // ~KeyValuePair() = default;
    const K &getKey() const;
    const V &getValue() const;
    void setKey(const K &key);
    void setValue(const V &value);
};

template <typename K, typename V>
KeyValuePair<K, V>::KeyValuePair(const K &key, const V &value)
    : m_key(key), m_value(value) {}

template <typename K, typename V>
const K &KeyValuePair<K, V>::getKey() const {
    return m_key;
}

template <typename K, typename V>
const V &KeyValuePair<K, V>::getValue() const {
    return m_value;
}

template <typename K, typename V>
void KeyValuePair<K, V>::setKey(const K &key) {
    m_key = key;
}

template <typename K, typename V>
void KeyValuePair<K, V>::setValue(const V &value) {
    m_value = value;
}
#endif