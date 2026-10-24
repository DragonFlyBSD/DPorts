PORTNAME=	birda
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	comms
MASTER_SITES=	ftp://ftp.netbsd.org/pub/pkgsrc/distfiles/

MAINTAINER=	mjl@luckie.org.nz
COMMENT=	Bohlin's IrDA utilities, ported from NetBSD's pkgsrc

USES=		uidfix

MAKE_ARGS=	MANDIR="${PREFIX}/share/man/man"

# XXX Static libraries with PIE are currently unsupported.
MAKE_ENV+= WITHOUT_PIE=true CWARNFLAGS=-fcommon

# Fix build with clang11
CFLAGS+=	-fcommon

dfly-install:
	${RM} -rfv ${STAGEDIR}${LOCALBASE}/man1
	${INSTALL_MAN} ${WRKSRC}/*/*.1 ${STAGEDIR}${PREFIX}/man/man1/

.include <bsd.port.mk>
