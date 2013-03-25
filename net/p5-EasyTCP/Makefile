# New ports collection makefile for:	EasyTCP
# Date created:				24 Jan 2002
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: ports/net/p5-EasyTCP/Makefile,v 1.16 2012/11/17 06:00:09 svnexp Exp $
#

PORTNAME=	EasyTCP
PORTVERSION=	0.26
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MNAGUIB
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easily create TCP/IP clients and servers

BUILD_DEPENDS=	p5-Crypt-RSA>=0:${PORTSDIR}/security/p5-Crypt-RSA
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::EasyTCP.3

.include <bsd.port.mk>
