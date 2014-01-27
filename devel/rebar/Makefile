# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: devel/rebar/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	rebar
PORTVERSION=	2.0.0
CATEGORIES=	devel
MASTER_SITES=	http://github.com/basho/${PORTNAME}/tarball/${GITVERSION}/
DISTNAME=	basho-${PORTNAME}-${GITVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	A build-tool for Erlang that follows OTP principles

LICENSE=	APACHE20

BUILD_DEPENDS=	${LOCALBASE}/bin/escript:${PORTSDIR}/lang/erlang
RUN_DEPENDS:=	${BUILD_DEPENDS}

PLIST_FILES=	bin/${PORTNAME}

GITVERSION=	1c98f6c

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/

.include <bsd.port.mk>
