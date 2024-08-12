/**
 * @author    Martin Pérez Villabrille
 * @copyright Copyright (c) 2023+ Martin Pérez Villabrille.
 *            All rights reserved
 */

#pragma once

#include "Node.hpp"

#define EXPORTED_FUNCTION __declspec(dllexport)

 /**
  * @brief Exports the functions to a DLL so that they can be used in Unity later. The functions call the gettes and settes of the Node class.
  * They return a void* so that it can be casted to Node and access the correspondent node object in memory.
  */
extern "C"
{
	EXPORTED_FUNCTION void* node_initializer();
	EXPORTED_FUNCTION void node_set_id(void* node, const char* id);
	EXPORTED_FUNCTION const char* node_get_id(void* node);
	EXPORTED_FUNCTION void node_set_dialogue_name(void* node, const char* dialogueName);
	EXPORTED_FUNCTION const char* node_get_dialogue_name(void* node);
	EXPORTED_FUNCTION void node_set_text(void* node, const char* text);
	EXPORTED_FUNCTION const char* node_get_text(void* node);
	EXPORTED_FUNCTION void node_set_type(void* node, int type);
	EXPORTED_FUNCTION int node_get_type(void* node);
}