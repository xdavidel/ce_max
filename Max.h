#pragma once

template <typename T, typename COMP>
T &Max(T item1, T item2, COMP comp)
{
	return comp(item1, item2) > 0 ? item1 : item2;
}