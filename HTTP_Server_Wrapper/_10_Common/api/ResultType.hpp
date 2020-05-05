/*
 * ResultType.hpp
 *
 *  Created on: May 2, 2020
 *      Author: pavel
 */

#ifndef RESULTTYPE_HPP_
#define RESULTTYPE_HPP_

#define UNUSED(x) (void)x;

namespace http_result {

typedef enum result_e {
	EUndefined = 0,
	EOK,
	EInProgress,
	EBusy,
	ENotAllowed,
	ELast,
	EMax = ELast
} result_t;


class ResultType {

private:
	http_result::result_t m_value;

    void destroy();
    void copyFrom(const ResultType &_other);

public:

	ResultType();
	ResultType(const ResultType & _rhs);
	ResultType(const http_result::result_t & _value);
	ResultType & operator = (const ResultType &_rhs);
	http_result::result_t & operator = (const http_result::result_t &_rhs)
	{
		m_value = _rhs;

		return m_value;
	}

	operator int() const { return (int)m_value; }

	http_result::result_t getValue()
	{
		return m_value;
	}

	void setValue(const http_result::result_t _value)
	{
		m_value = _value;
	}
};

__inline
void ResultType::copyFrom(const ResultType &_rhs)
{
    m_value = _rhs.m_value;
}

__inline
ResultType::ResultType() :
m_value(EUndefined)
{

}

__inline
ResultType::ResultType(const ResultType &_rhs) :
m_value(EUndefined)
{
    copyFrom(_rhs);
}

__inline
ResultType & ResultType::operator = (const ResultType &_rhs)
{
    copyFrom(_rhs);

    return *this;
}

__inline
ResultType::ResultType(const result_t & _value)
{
	m_value = _value;
}

} // http_result

#endif /* RESULTTYPE_HPP_ */
