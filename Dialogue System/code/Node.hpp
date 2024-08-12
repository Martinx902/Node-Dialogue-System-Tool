/**
 * @author    Martin Pérez Villabrille
 * @copyright Copyright (c) 2023+ Martin Pérez Villabrille.
 *            All rights reserved
 */

#pragma once

#include <string>

namespace MTool
{
	/**
	 * @brief Represents the types of dialogue.
	 */
	enum DialogueType
	{
		SingleChoice,   ///< Single choice dialogue.
		MultipleChoice  ///< Multiple choice dialogue.
	};

	/**
	 * @brief Represents a base dialogue node with various properties.
	 */
	class Node
	{
	private:

		std::string ID;           ///< Identifier of the node.
		std::string DialogueName; ///< Name of the node.
		std::string Text;         ///< Text of the dialogue.
		DialogueType Type;        ///< Type of the dialogue (SingleChoice or MultipleChoice).

	public:

		/**
		 * @brief Constructs a Node object with default values. So that it can be called and return a pointer to an object.
		 */
		Node()
			: ID(""),
			DialogueName("Dialogue Name"),
			Text("Dialogue text"),
			Type(DialogueType::SingleChoice)
		{}

		/**
		 * @brief Gets the ID of the node.
		 * @return The ID as a const char*.
		 */
		const char* getID() const
		{
			return ID.c_str();
		}

		/**
		 * @brief Gets the name of the dialogue.
		 * @return The name of the dialogue as a const char*.
		 */
		const char* getDialogueName() const
		{
			return DialogueName.c_str();
		}

		/**
		 * @brief Gets the text of the dialogue.
		 * @return The text of the dialogue as a const char*.
		 */
		const char* getText() const
		{
			return Text.c_str();
		}

		/**
		 * @brief Gets the type of the dialogue.
		 * @return The type of the dialogue as an int.
		 */
		int getType() const
		{
			return int(Type);
		}

		/**
		 * @brief Sets the ID of the node.
		 * @param id The new ID as a const char*.
		 */
		void setID(const char* id)
		{
			ID = id;
		}

		/**
		 * @brief Sets the name of the dialogue.
		 * @param dialogueName The new dialogue name as a const char*.
		 */
		void setDialogueName(const char* dialogueName)
		{
			DialogueName = dialogueName;
		}

		/**
		 * @brief Sets the text of the dialogue.
		 * @param text The new dialogue text as a const char*.
		 */
		void setText(const char* text)
		{
			Text = text;
		}

		/**
		 * @brief Sets the type of the dialogue.
		 * @param type The new dialogue type as an int.
		 */
		void setType(int type)
		{
			Type = DialogueType(type);
		}
	};
}