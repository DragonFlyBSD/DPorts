# Created by: Alan Eldridge <alane@FreeBSD.org>
# $FreeBSD: textproc/aft/Makefile 341120 2014-01-25 22:03:15Z mat $

PORTNAME=	aft
PORTVERSION=	5.098
PORTEPOCH=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.maplefish.com/todd/

MAINTAINER=	culot@FreeBSD.org
COMMENT=	A document preparation system using an Almost Free Text input format

LICENSE=	CART
LICENSE_GROUPS=	FSF OSI
LICENSE_NAME=	Clarified Artistic License
LICENSE_FILE=	${WRKSRC}/LICENSE.txt
LICENSE_PERMS=	auto-accept

USES=		perl5 gmake
GNU_CONFIGURE=	yes
OPTIONS_DEFINE=	DOCS

PORTDOCS=	*

.include <bsd.port.mk>
