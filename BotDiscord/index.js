const { Client } = require('discord.js');
const ALL_INTENTS = 32767;
const bot = new Client({ intents: ALL_INTENTS, partials: ['MESSAGE', 'CHANNEL', 'REACTION'], });
const token = 'MTA0NzM4MjU2MTM3MTk5NjE5MA.Gg_M5i.KlUWJxO-OTZdGyddD6kwgr5lFU586DUnNRYYm0';

bot.on('ready', () => {
    console.log('Ready');
    bot.application.commands.set([
        { name: 'ping', description: 'pong!', options: [], }
    ]);
});

bot.on('interactionCreate', (interaction) => {
    if (interaction.isCommand() && interaction.commandName === 'ping') {
        interaction.reply('pong!');
    }
});

bot.login(token);