# Created by: Stanislav Sedov <ssedov@mbsd.msk.ru>
# $FreeBSD: devel/ocaml-xstr/Makefile 309295 2012-12-20 05:53:00Z araujo $
#

PORTNAME=	xstr
PORTVERSION=	0.2.1
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	http://download.camlcity.org/download/
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Thread-safe implementation of string searching/matching

LICENSE=	MIT


WRKSRC=		${WRKDIR}/${PORTNAME}

USE_OCAML=	yes
USE_OCAML_FINDLIB=yes
USE_OCAMLFIND_PLIST=yes

USE_GMAKE=	yes
ALL_TARGET=	all opt

.include <bsd.port.mk>
