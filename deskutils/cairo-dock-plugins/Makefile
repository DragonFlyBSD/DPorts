PORTNAME=	cairo-dock-plugins
PORTVERSION=	3.4.1
PORTREVISION=	14
CATEGORIES=	deskutils

PATCH_SITES=	https://github.com/Cairo-Dock/cairo-dock-plug-ins/commit/
PATCHFILES=	d08541a0afb4377ce2f35feb280fbe443870b587.patch:-p1

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Cairo-Dock-Plugins for Cairo-Dock
WWW=		https://www.glx-dock.org/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgldi.so:deskutils/cairo-dock
RUN_DEPENDS=	wget:ftp/wget

USES=		cmake gettext gnome localbase:ldflags pkgconfig python xorg
USE_GITHUB=	yes
GH_ACCOUNT=	Cairo-Dock
GH_PROJECT=	cairo-dock-plug-ins
USE_GNOME=	glib20 gtk30 librsvg2 libxml2
USE_LDCONFIG=	yes
USE_XORG=	xrender

CMAKE_ARGS=	-DROOT_PREFIX:PATH=${STAGEDIR} \
		-Denable-weblets:BOOL=FALSE

GNU_CONFIGURE=	yes

DATADIR=	${PREFIX}/share/cairo-dock

PLIST_SUB=	PYVER="${PYTHON_VERSION:S/thon//}"

OPTIONS_DEFAULT=	GMENU
OPTIONS_GROUP=		INTEGR PLUGINS ADDON TPI
OPTIONS_GROUP_ADDON=	EXIF ICAL UPOWER
OPTIONS_GROUP_INTEGR=	GNOME_INTEGRATION XFCE_INTEGRATION
OPTIONS_GROUP_PLUGINS=	ALSA_MIXER GMENU IMPULSE KEYBOARD_INDICATOR \
			MAIL SOUND_EFFECTS XGAMMA ZEITGEIST
#OPTIONS_GROUP_TPI=	PYTHON RUBY MONO VALA
OPTIONS_SUB=		yes

ADDON_DESC=		Add On
ALSA_MIXER_DESC=	Alsa-Mixer applet
EXIF_DESC=		Read file meta-data
GMENU_DESC=		GMenu applet
GNOME_INTEGRATION_DESC=	GNOME integration support
ICAL_DESC=		IETF Calendaring and Scheduling protocols
IMPULSE_DESC=		Impulse applet
INTEGR_DESC=		Integration plug-ins
KEYBOARD_INDICATOR_DESC=	 Keyboard-indicator applet
MAIL_DESC=		Mail applet
#MONO_DESC=		Mono interface
PLUGINS_DESC=		Plug-ins
#PYTHON_DESC=		Python interface
#RUBY_DESC=		Ruby interface
SOUND_EFFECTS_DESC=	Sound Effects applet
#TERMINAL_DESC=		Terminal applet
#TPI_DESC=		Third Party Interfaces
UPOWER_DESC=		D-Bus daemon for power management tasks
#VALA_DESC=		Vala interface
XFCE_INTEGRATION_DESC=	XFCE integration support
XGAMMA_DESC=		Xgamma applet
ZEITGEIST_DESC=		User logs activities

ALSA_MIXER_LIB_DEPENDS=	libasound.so:audio/alsa-lib
ALSA_MIXER_RUN_DEPENDS=	${LOCALBASE}/lib/alsa-lib/libasound_module_pcm_oss.so:audio/alsa-plugins
ALSA_MIXER_CMAKE_BOOL=	enable-alsa-mixer
EXIF_LIB_DEPENDS=	libexif.so:graphics/libexif
EXIF_CMAKE_BOOL=	enable-exif-support
GMENU_LIB_DEPENDS=	libgnome-menu-3.so:x11/gnome-menus
GMENU_CMAKE_BOOL=	enable-gmenu
#GNOME_INTEGRATION_LIB_DEPENDS=
GNOME_INTEGRATION_CMAKE_BOOL=	enable-gnome-integration
ICAL_LIB_DEPENDS=	libical.so:devel/libical
ICAL_CMAKE_BOOL=	enable-ical-support
IMPULSE_LIB_DEPENDS=	libpulse.so:audio/pulseaudio
IMPULSE_CMAKE_BOOL=	enable-impulse
KEYBOARD_INDICATOR_LIB_DEPENDS=	libexif.so:graphics/libexif \
				libxklavier.so:x11/libxklavier
KEYBOARD_INDICATOR_CMAKE_BOOL=	enable-keyboard-indicator
# libetpan 1.9.4 replaces libetpan-config with libetpan.pc
MAIL_BUILD_DEPENDS=	libetpan>=1.9.4:mail/libetpan
MAIL_LIB_DEPENDS=	libetpan.so:mail/libetpan
MAIL_CMAKE_BOOL=	enable-mail
#MONO_BUILD_DEPENDS=	mono:lang/mono${MONO_DEFAULT}
#MONO_RUN_DEPENDS=	mono:lang/mono${MONO_DEFAULT}
#MONO_CMAKE_BOOL=	enable-mono-interface
CMAKE_ARGS+=		-Denable-mono-interface:BOOL=FALSE
#PYTHON_LIB_DEPENDS=
#PYTHON_CMAKE_BOOL=	enable-python-interface
CMAKE_ARGS+=		-Denable-python-interface:BOOL=FALSE
#RUBY_LIB_DEPENDS=
#RUBY_CMAKE_BOOL=	enable-ruby-interface
CMAKE_ARGS+=		-Denable-ruby-interface:BOOL=FALSE
SOUND_EFFECTS_LIB_DEPENDS=	libasound.so:audio/alsa-lib
SOUND_EFFECTS_RUN_DEPENDS=	${LOCALBASE}/lib/alsa-lib/libasound_module_pcm_oss.so:audio/alsa-plugins
SOUND_EFFECTS_CMAKE_BOOL=	enable-sound-effects
# Needs newer vte
#TERMINAL_LIB_DEPENDS=	vte:x11-toolkits/vte
#TERMINAL_CMAKE_BOOL=	enable-terminal
UPOWER_LIB_DEPENDS=	libupower-glib.so:sysutils/upower
UPOWER_CMAKE_BOOL=	enable-upower-support
#VALA_LIB_DEPENDS=
#VALA_CMAKE_BOOL=	enable-vala-interface
CMAKE_ARGS+=		-Denable-vala-interface:BOOL=FALSE
XFCE_INTEGRATION_LIB_DEPENDS=	libexif.so:graphics/libexif
XFCE_INTEGRATION_CMAKE_BOOL=	enable-xfce-integration
XGAMMA_RUN_DEPENDS=	xgamma:x11/xgamma
XGAMMA_CMAKE_BOOL=	enable-xgamma
ZEITGEIST_LIB_DEPENDS=	libzeitgeist-2.0.so:sysutils/zeitgeist
ZEITGEIST_CMAKE_BOOL=	enable-recent-events

ICONS_PACKAGE=	cairo-dock-plugins-png-icons

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400079 || ( ${OSVERSION} >= 1302505 && ${OSVERSION} < 1400000 ))
CFLAGS+=	-Wno-error=int-conversion
.endif

post-patch:
	@${FIND} ${WRKSRC} -type f \( -name "*.c" -o -name "*.conf" \
		-o -name netspeed -o -name nvidia-config -o -name "*.sh" \
		-o -name "*.rb" \) | ${XARGS} ${REINPLACE_CMD} -i.orig -e \
	    's|/bin/bash|${LOCALBASE}/bin/bash|g; \
	     s|/usr/bin/python|${PYTHON_CMD}|g; \
	     s|/usr/bin/ruby|${LOCALBASE}/bin/ruby|g; \
	     s|/usr/share/applications|${LOCALBASE}/share/applications|g; \
	     s|/usr/share/cairo-dock|${LOCALBASE}/share/cairo-dock|g'

#post-install:
#.if defined(VALA)
#	${MV} ${STAGEDIR}${PREFIX}/lib/pkgconfig/CDApplet.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig/
#.endif

.include <bsd.port.mk>
