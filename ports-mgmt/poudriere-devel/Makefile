# $FreeBSD: head/ports-mgmt/poudriere-devel/Makefile 369357 2014-09-27 04:19:10Z bdrewery $

PORTNAME=	poudriere
PORTVERSION=	3.1.3
CATEGORIES=	ports-mgmt
PKGNAMESUFFIX=	-devel

MAINTAINER=	marino@FreeBSD.org
COMMENT=	Port build and test system

LICENSE=	BSD2CLAUSE

CONFLICTS_INSTALL=	poudriere-[0-9]*

USE_GITHUB=	yes
GH_ACCOUNT=	freebsd
GH_TAGNAME=	4f70582

GNU_CONFIGURE=	yes
ETCDIR=		${PREFIX}/etc/poudriere.d

OPTIONS_DEFINE=	ZSH
OPTIONS_SUB=	yes

.include <bsd.port.options.mk>

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions/
	${INSTALL_DATA} ${WRKSRC}/completions/zsh/_poudriere \
	    ${STAGEDIR}${PREFIX}/share/zsh/site-functions/

.include <bsd.port.mk>
