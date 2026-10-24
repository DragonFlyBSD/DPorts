PORTNAME=	vbetool
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	http://www.codon.org.uk/~mjg59/vbetool/download/	\
		LOCAL/jkim

MAINTAINER=	jkim@FreeBSD.org
COMMENT=	Application for executing video card BIOS code
WWW=		http://www.codon.org.uk/~mjg59/vbetool/

LICENSE=	GPLv2

LIB_DEPENDS=	libpci.so:devel/libpci \
		libx86.so:devel/libx86

PLIST_FILES=	sbin/vbetool \
		share/man/man1/vbetool.1.gz

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share
CONFIGURE_ARGS+=--with-x86emu
CFLAGS+=	-I${PREFIX}/include -L${PREFIX}/lib

dfly-patch:
	${REINPLACE_CMD} -e 's@ifndef \(__FreeBSD__\)@if \!defined(\1) \&\& \!defined(__DragonFly__)@g'	\
			 -e 's@ifdef \(__FreeBSD__\)@if defined(\1) || defined(__DragonFly__)@g'	\
		${WRKSRC}/vbetool.c

.include <bsd.port.mk>
