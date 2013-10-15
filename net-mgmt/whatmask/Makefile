# Created by: ijliao
# $FreeBSD: net-mgmt/whatmask/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	whatmask
PORTVERSION=	1.2
CATEGORIES=	net-mgmt
MASTER_SITES=	http://downloads.laffeycomputer.com/current_builds/whatmask/

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Easily convert between three common subnet mask notations

LICENSE=	GPLv2

GNU_CONFIGURE=	yes

NO_STAGE=	yes
MAN1=		whatmask.1
DOCS=		AUTHORS ChangeLog README

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
