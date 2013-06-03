# $FreeBSD: cad/gdt/Makefile 319560 2013-06-01 11:23:22Z hrs $

PORTNAME=	gdt
PORTVERSION=	4.0
CATEGORIES=	cad
MASTER_SITES=	SF/gds2/gds2/
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	GDS2/GDT format translator

LICENSE=	GPLv2

USE_PERL5_RUN=	yes
USES=	shebangfix
SHEBANG_FILES=	Examples/gdsinfo Examples/scalegds
WRKSRC=		${WRKDIR}/${PORTNAME:tu}-${PORTVERSION}
PLIST_FILES=	bin/gdsinfo bin/gds2gdt bin/gdt2gds bin/scalegds

post-patch:
	${REINPLACE_CMD} -e 's,%%PREFIX%%,${PREFIX},' \
		${WRKSRC}/Examples/gdsinfo ${WRKSRC}/Examples/scalegds

pre-build:
	${INSTALL_DATA} ${FILESDIR}/Makefile ${WRKSRC}

post-install:
	${INSTALL_SCRIPT} \
		${WRKSRC}/Examples/gdsinfo \
		${WRKSRC}/Examples/scalegds \
		${PREFIX}/bin

.include <bsd.port.mk>
