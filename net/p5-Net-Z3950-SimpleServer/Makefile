# New ports collection makefile for:	p5-Net-Z3950-SimpleServer
# Date created:				12 March 2002
# Whom:                			Dmitry Sivachenko <demon@FreeBSD.org>
#
# $FreeBSD: net/p5-Net-Z3950-SimpleServer/Makefile 326506 2013-09-06 14:30:23Z az $
#

PORTNAME=	Net-Z3950-SimpleServer
PORTVERSION=	1.16
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	A Perl module for developing Z39.50 servers

LIB_DEPENDS=	yaz:${PORTSDIR}/net/yaz

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV=	LOCALBASE=${LOCALBASE}

MAN3=		Net::Z3950::GRS1.3 Net::Z3950::SimpleServer.3

.include <bsd.port.mk>
