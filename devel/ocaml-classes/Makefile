# Created by: Michaël Grünewald
# $FreeBSD: ports/devel/ocaml-classes/Makefile,v 1.14 2012/11/17 05:56:02 svnexp Exp $

PORTNAME=	classes
PORTVERSION=	3.05
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	http://caml.inria.fr/pub/distrib/bazar-ocaml/ \
		http://wwwfun.kurims.kyoto-u.ac.jp/soft/olabl/dist/
PKGNAMEPREFIX=	ocaml-
DISTNAME=	ocaml-${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Ocaml Object interface for ocaml's standard library modules

BUILD_DEPENDS=	ocamlc:${PORTSDIR}/lang/ocaml
RUN_DEPENDS:=	${BUILD_DEPENDS}

post-extract:
	@${CP} ${FILESDIR}/META ${WRKSRC}

.include <bsd.port.mk>
