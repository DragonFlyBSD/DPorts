# New ports collection makefile for: elf
# Date created:        December 31 2002 (HAPPY NEW YEAR!)
# Whom:                Samy Al Bahra <samy@kerneled.org>
#
# $FreeBSD: ports/devel/elf/Makefile,v 1.16 2012/11/17 05:55:41 svnexp Exp $
#

PORTNAME=	elf
PORTVERSION=	0.5.4p1
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_PACKETSTORM}
MASTER_SITE_SUBDIR=	linux/reverse-engineering

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A commandline based ELF header analyzer

MAN1=		elf.1
MANCOMPRESSED=	no
PLIST_FILES=	bin/elf
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's/gcc/${CC}/g' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
