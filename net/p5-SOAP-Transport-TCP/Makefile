# New ports collection makefile for:	SOAP::Transport::TCP
# Date created:		2011-09-09
# Whom:			Andrej Zverev <az@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-SOAP-Transport-TCP/Makefile,v 1.2 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	SOAP-Transport-TCP
PORTVERSION=	0.715
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MKUTTER
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	TCP Transport Support for SOAP::Lite

RUN_DEPENDS=	p5-SOAP-Lite>=0.714:${PORTSDIR}/net/p5-SOAP-Lite
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes

MAN3=	SOAP::Transport::TCP.3

.include <bsd.port.mk>
