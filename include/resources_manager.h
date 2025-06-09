#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <unordered_map>

class Resources_Manager {
	std::unordered_map<std::string, sf::Font> fonts;         // �����
	std::unordered_map<std::string, sf::Texture> textures;   // ��������
	std::unordered_map<std::string, sf::SoundBuffer> sounds; // �����
public:
	Resources_Manager() = default;

	sf::Font& getFont(const std::string& path);
	sf::Texture& getTexture(const std::string& path);
	sf::SoundBuffer& getSound(const std::string& path);

};

