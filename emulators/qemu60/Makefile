# Created by: Aaron LI <aly@aaronly.me>
# $FreeBSD$

PORTNAME=	qemu
PORTVERSION=	6.0.0
PORTREVISION=	3
CATEGORIES=	emulators
MASTER_SITES=	https://download.qemu.org/

MAINTAINER=	aly@aaronly.me
COMMENT=	Generic and open source machine emulator and virtualizer

LICENSE=	GPLv2 LGPL21 MIT BSD2CLAUSE
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS?=	libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig \
		liblzo2.so:archivers/lzo2 \
		libnettle.so:security/nettle \
		libpcre2-8.so:devel/pcre2 \
		libsnappy.so:archivers/snappy \
		libzstd.so:archivers/zstd

USES=		bison compiler:c11 cpe gmake gnome iconv:wchar_t \
		ncurses ninja perl5 pkgconfig python:build tar:xz xorg
USE_GNOME=	cairo glib20 libxml2
USE_PERL5=	build
USE_XORG=	pixman
INSTALLS_ICONS=	yes

# QEMU ships the 'build' directory for configuring and building.
CONFIGURE_OUTSOURCE=	yes
CONFIGURE_WRKSRC=	${WRKSRC}/build

HAS_CONFIGURE=	yes
CONFIGURE_ARGS?=--prefix=${PREFIX} \
		--interp-prefix=${PREFIX}/share/qemu \
		--mandir=${PREFIX}/share/man \
		--localstatedir=/var \
		--python=${PYTHON_CMD} \
		--enable-curses \
		--enable-docs \
		--enable-plugins \
		--enable-tools \
		--disable-libssh \
		--disable-netmap
CONFIGURE_ARGS+=--disable-guest-agent \
		--disable-linux-user \
		--disable-linux-aio \
		--disable-linux-io-uring \
		--disable-kvm \
		--disable-hax \
		--disable-hvf \
		--disable-whpx \
		--disable-xen

OPTIONS_DEFINE=		CAPSTONE CURL DEBUG DOCS JPEG GNUTLS GTK3 ISCSI \
			NFS NLS OPENGL PNG SAMBA SASL SPICE USBREDIR VDE X11
OPTIONS_DEFAULT=	CURL JPEG GNUTLS NFS NLS OPENGL PNG SASL \
			SPICE USBREDIR VDE X11
OPTIONS_SUB=		yes

CAPSTONE_DESC=		Disassembly framework support with devel/capstone4
CAPSTONE_LIB_DEPENDS=	libcapstone.so:devel/capstone4
CAPSTONE_CONFIGURE_ON=	--enable-capstone=system \
			--extra-cflags=-I${LOCALBASE}/include/capstone
CAPSTONE_CONFIGURE_OFF=	--disable-capstone

CURL_DESC=		Support ISOs/-cdrom via HTTP/HTTPS
CURL_LIB_DEPENDS=	libcurl.so:ftp/curl
CURL_CONFIGURE_OFF=	--disable-curl

DEBUG_CONFIGURE_ON=	--enable-debug --enable-debug-tcg --enable-debug-info

DOCS_USES=		makeinfo
DOCS_BUILD_DEPENDS=	sphinx-build:textproc/py-sphinx \
			texi2html:textproc/texi2html
DOCS_CONFIGURE_OFF=	--disable-docs

GNUTLS_DESC=		TLS support for VNC server
GNUTLS_LIB_DEPENDS=	libgnutls.so:security/gnutls
GNUTLS_CONFIGURE_OFF=	--disable-gnutls

GTK3_DESC=		GTK interface support
GTK3_USES=		desktop-file-utils
GTK3_USE=		GNOME=gdkpixbuf2,gtk30,vte3 XORG=x11,xext
GTK3_LIB_DEPENDS=	libxkbcommon.so:x11/libxkbcommon
GTK3_CONFIGURE_OFF=	--disable-gtk --disable-vte

ISCSI_DESC=		iSCSI support
ISCSI_LIB_DEPENDS=	libiscsi.so:net/libiscsi
ISCSI_CONFIGURE_OFF=	--disable-libiscsi

JPEG_DESC=		JPEG lossy compression for VNC server
JPEG_USES=		jpeg
JPEG_CONFIGURE_OFF=	--disable-vnc-jpeg

NFS_DESC=		NFS support
NFS_LIB_DEPENDS=	libnfs.so:net/libnfs
NFS_CONFIGURE_OFF=	--disable-nfs

NLS_USES=		gettext
NLS_CONFIGURE_OFF=	--disable-gettext

OPENGL_DESC=		OpenGL support
OPENGL_USES=		gl
OPENGL_USE=		GL=gl
OPENGL_LIB_DEPENDS=	libepoxy.so:graphics/libepoxy
OPENGL_CONFIGURE_OFF=	--disable-opengl

PNG_DESC=		PNG compression for VNC server
PNG_LIB_DEPENDS=	libpng.so:graphics/png
PNG_CONFIGURE_OFF=	--disable-vnc-png

SAMBA_DESC=		Samba support (for -smb)
SAMBA_USES=		samba:run
SAMBA_CONFIGURE_ON=	--smbd=${LOCALBASE}/sbin/smbd

SASL_DESC=		SASL encryption for VNC server
SASL_LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2
SASL_CONFIGURE_OFF=	--disable-vnc-sasl

SPICE_DESC=		SPICE protocol support
SPICE_LIB_DEPENDS=	libspice-server.so:devel/libspice-server
SPICE_BUILD_DEPENDS=	spice-protocol>0:devel/spice-protocol
SPICE_CONFIGURE_OFF=	--disable-spice

USBREDIR_DESC=		USB network redirection support
USBREDIR_BUILD_DEPENDS=	usbredir>=0.6:net/usbredir
USBREDIR_RUN_DEPENDS=	usbredir>=0.6:net/usbredir
USBREDIR_CONFIGURE_OFF=	--disable-usb-redir

VDE_DESC=		VDE network support
VDE_LIB_DEPENDS=	libvdeplug.so:net/vde2
VDE_CONFIGURE_OFF=	--disable-vde

X11_DESC=		X11 SDL interface support
X11_USES=		sdl
X11_USE=		GNOME=gdkpixbuf2 SDL=sdl2,image2 XORG=x11,xext
X11_CONFIGURE_OFF=	--disable-sdl --disable-sdl-image

.include <bsd.port.options.mk>

.if !defined(STRIP) || ${STRIP} == ""
CONFIGURE_ARGS+=--disable-strip
.endif

PORTDOCS?=	*.html *.js \
		_static/* devel/* interop/* specs/* system/* tools/* user/*

EXTRA_PATCHES=	${DFLY_PATCHDIR}/extra-nvmm01.patch \
		${DFLY_PATCHDIR}/extra-nvmm02.patch \
		${DFLY_PATCHDIR}/extra-nvmm03.patch \
		${DFLY_PATCHDIR}/extra-nvmm04.patch \
		${DFLY_PATCHDIR}/extra-nvmm05.patch \
		${DFLY_PATCHDIR}/extra-nvmm06.patch

post-install:
	${RM} -f ${STAGEDIR}/${DOCSDIR}/.buildinfo
.include <bsd.port.mk>
