<?php
$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'primary_button_color' => t('Primary Button Color'),
    'primary_button_hover_color' => t('Primary Button Hover Color'),
    'primary_button_text_color' => t('Primary Button Text Color'),
    'primary_button_hover_text_color' => t('Primary Button Hover Text Color'),
    'primary_theme_color' => t('Primary Theme Color'),
    'active_link_color' => t('Active Link Color'),
    'header_background_color' => t('Header Background Color'),
    'navigation_background_color' => t('Navigation Background Color'),
    'base' => t('Base'),
    'link' => t('Link'),
    'text' => t('Text'),
    'clr-white' => t('clr-white'),
    'clr-black' => t('clr-black'),
    'gray-200' => t('gray-200'),
    'gray-300' => t('gray-300'),
    'gray-700' => t('gray-700'),
    'clr-navy' => t('clr-navy'),
    'clr-green-light' => t('clr-green-light'),
    'clr-green' => t('clr-green'),
    'clr-green-dark' => t('clr-green-dark'),
    'clr-yellow' => t('clr-yellow'),
    'clr-red' => t('clr-red'),
    'clr-red-light' => t('clr-red-light'),
    'clr-red-dark' => t('clr-red-dark'),
    'clr-gray-light' => t('clr-gray-light'),
    'clr-gray-light-d5' => t('clr-gray-light-d5'),
    'clr-gray' => t('clr-gray'),
    'gray-dark' => t('gray-dark'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('Default'),
      'colors' => [
        'primary_button_color' => '#c2e76b',
        'primary_button_hover_color' => '#b4e24a',
        'primary_button_text_color' => '#ffffff',
        'primary_button_hover_text_color' => '#ffffff',
        'primary_theme_color' => '#5bb4d8',
        'active_link_color' => '#0287bf',
        'header_background_color' => '#3c3c3b',
        'navigation_background_color' => '#f8f7f5',
        'base' => '#ffffff',
        'link' => '#ffffff',
        'text' => '#ffffff',
        'clr-white' => '#ffffff',
        'clr-black' => '#000000',
        'gray-200' => '#f4f4f4',
        'gray-300' => '#d9d9d9',
        'gray-700' => '#575756',
        'clr-navy' => '#2f3758',
        'clr-green-light' => '#a4e9d7',
        'clr-green' => '#4ad3b0',
        'clr-green-dark' => '#43b598',
        'clr-yellow' => '#ffe6a2',
        'clr-red' => '#d34a4a',
        'clr-red-light' => '#dfb5b5',
        'clr-red-dark' => '#712828',
        'clr-gray-light' => '#f5f5f5',
        'clr-gray-light-d5' => '#d5d5d5',
        'clr-gray' => '#a5a5a5',
        'gray-dark' => '#707070',
      ],
    ],
  ],
];
// CSS files (excluding @import) to rewrite with new color scheme.
//$info['css'] = ['color/color.css'];
$info['css'] = ['dist/css/main.css'];