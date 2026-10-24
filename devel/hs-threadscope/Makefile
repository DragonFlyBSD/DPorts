PORTNAME=	threadscope
DISTVERSION=	0.2.15.1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Graphical tool for profiling parallel Haskell programs
WWW=		https://www.haskell.org/haskellwiki/ThreadScope

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		cabal gnome pkgconfig

USE_GNOME=	cairo gdkpixbuf glib20 gtk30

IGNORE= unmaintained, please request fixing to users mailing list
dfly-patch:
	mv ${WRKSRC}/${PORTNAME}.cabal ${WRKSRC}/${PORTNAME}.cabal.orig
	awk '{print; if (tolower($$1) == "executable") {print "    extra-libraries: m"}}' \
		${WRKSRC}/${PORTNAME}.cabal.orig > ${WRKSRC}/${PORTNAME}.cabal
	${REINPLACE_CMD} -e 's@\(\|\| os(freebsd)\)@\1 || os(dragonfly)@g' \
			 -e 's@-D_Nonnull=@& -D_Bool=int @g' \
		${WRKSRC}/_cabal_deps/cairo-*/cairo.cabal \
		${WRKSRC}/_cabal_deps/glib-*/glib.cabal \
		${WRKSRC}/_cabal_deps/gtk-*/gtk.cabal \
		${WRKSRC}/_cabal_deps/pango-*/pango.cabal

.include <bsd.port.mk>
