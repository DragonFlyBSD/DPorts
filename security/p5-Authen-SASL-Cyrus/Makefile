# New ports collection makefile for:	Authen-SASL-Cyrus
# Date created:	   01 November 2005
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/security/p5-Authen-SASL-Cyrus/Makefile,v 1.9 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Authen-SASL-Cyrus
PORTVERSION=	0.13
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XS SASL Authentication

BUILD_DEPENDS=	p5-Authen-SASL>=0:${PORTSDIR}/security/p5-Authen-SASL
LIB_DEPENDS=	sasl2:${PORTSDIR}/security/cyrus-sasl2
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include"

MAN3=		Authen::SASL::Cyrus.3

.include <bsd.port.mk>
