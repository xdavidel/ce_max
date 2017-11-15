#pragma once

template <typename T>
T &Max(T item1, T item2, T item3)
{
	T retItem = item1;
	if (item2 > retItem)
	{
		retItem = item2;
	}

	if (item3 > retItem)
	{
		retItem = item3;
	}

	return retItem;
}