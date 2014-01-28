# Created by: J. Giovannangeli
# $FreeBSD: devel/ocaml-opam/Makefile 340403 2014-01-20 14:48:06Z marino $

PORTNAME=	opam
PORTVERSION=	1.1.0
CATEGORIES=	devel
MASTER_SITES=	http://www.ocamlpro.com/pub/
PKGNAMEPREFIX=	ocaml-
DISTNAME=	opam-full-${PORTVERSION}

MAINTAINER=	joris@giovannangeli.fr
COMMENT=	Source-based package manager for OCaml

LICENSE=	GPLv3

BUILD_DEPENDS=	curl:${PORTSDIR}/ftp/curl

USES=		gmake
USE_OCAML=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
