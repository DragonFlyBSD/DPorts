PORTNAME=	libplasma
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Shared libraries for Plasma Desktop

BUILD_DEPENDS=	wayland-protocols>=0:graphics/wayland-protocols
LIB_DEPENDS=	libwayland-client.so:graphics/wayland \
		libxkbcommon.so:x11/libxkbcommon

USES= cmake gettext gl kde:6 pkgconfig qt:6 tar:xz xorg gmake
USE_XORG=	ice sm x11 xcb xext
USE_GL=		egl gl opengl
USE_KDE=	activities archive colorscheme completion config configwidgets \
		coreaddons globalaccel guiaddons i18n iconthemes jobwidgets \
		kio kirigami2 notifications package \
		plasma-wayland-protocols service solid svg widgetsaddons \
		windowsystem \
		ecm:build
USE_QT=		base declarative svg wayland

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
