/**
 * @author    Martin Pérez Villabrille
 * @copyright Copyright (c) 2023+ Martin Pérez Villabrille.
 *            All rights reserved
 */

#include <list>
#include <memory>
#include "Unity_Bridge.hpp"

using namespace std;
using namespace MTool;

extern "C"
{
	void* node_initializer()
	{
		return new Node;
	}

	void node_set_id(void* node, const char* id)
	{
		auto node_ptr = reinterpret_cast<Node*>(node);

		if (node && id)
		{
			node_ptr->setID(id);
		}
	}

	const char* node_get_id(void* node)
	{
		auto node_ptr = reinterpret_cast<Node*>(node);

		if (node)
		{
			return node_ptr->getID();
		}
		return nullptr;
	}

	void node_set_dialogue_name(void* node, const char* dialogueName)
	{
		auto node_ptr = reinterpret_cast<Node*>(node);

		if (node && dialogueName)
		{
			node_ptr->setDialogueName(dialogueName);
		}
	}

	const char* node_get_dialogue_name(void* node)
	{
		auto node_ptr = reinterpret_cast<Node*>(node);

		if (node)
		{
			return node_ptr->getDialogueName();
		}
		return nullptr;
	}

	void node_set_text(void* node, const char* text)
	{
		auto node_ptr = reinterpret_cast<Node*>(node);

		if (node && text)
		{
			node_ptr->setText(text);
		}
	}

	const char* node_get_text(void* node)
	{
		auto node_ptr = reinterpret_cast<Node*>(node);

		if (node)
		{
			return node_ptr->getText();
		}
		return nullptr;
	}

	void node_set_type(void* node, int type)
	{
		auto node_ptr = reinterpret_cast<Node*>(node);

		if (node)
		{
			node_ptr->setType(type);
		}
	}

	int node_get_type(void* node)
	{
		auto node_ptr = reinterpret_cast<Node*>(node);

		if (node)
		{
			return node_ptr->getType();
		}
		return SingleChoice;
	}
}