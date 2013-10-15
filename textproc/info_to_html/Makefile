# Created by: ijliao
# $FreeBSD: textproc/info_to_html/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	info_to_html
PORTVERSION=	0.9.6
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	http://www.mons.net/software/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Translate GNU info files into HTML pages

PLIST_FILES=	bin/info_to_html
USES=		perl5
NO_BUILD=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/info_to_html ${PREFIX}/bin

.include <bsd.port.post.mk>
