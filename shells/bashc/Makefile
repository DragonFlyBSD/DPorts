# Created by: alepulver
# $FreeBSD: shells/bashc/Makefile 337646 2013-12-27 08:10:49Z bapt $

PORTNAME=	bashc
PORTVERSION=	3.2.33.0
CATEGORIES=	shells
MASTER_SITES=	SF
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU bash shell extended with visual two-panel file browser

MAKE_JOBS_UNSAFE=	yes

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/bashc \
		etc/bash_commander \
		etc/bash_dialog

post-patch:
	@${REINPLACE_CMD} -e 's|autoconf|${TRUE}|' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
