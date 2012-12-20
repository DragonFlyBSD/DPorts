# New ports collection makefile for:	p5-Email-Filter
# Date created:		2003-08-31
# Whom:			Lars Thegler <lars@thegler.dk>
#
# $FreeBSD: ports/mail/p5-Email-Filter/Makefile,v 1.11 2012/11/17 05:59:07 svnexp Exp $
#

PORTNAME=	Email-Filter
PORTVERSION=	1.03.2
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Library for creating easy email filters

BUILD_DEPENDS=	p5-Email-Simple>=0:${PORTSDIR}/mail/p5-Email-Simple \
		p5-Email-LocalDelivery>=0:${PORTSDIR}/mail/p5-Email-LocalDelivery \
		p5-IPC-Run>=0:${PORTSDIR}/devel/p5-IPC-Run \
		p5-Class-Trigger>=0:${PORTSDIR}/devel/p5-Class-Trigger
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Email::Filter.3

.include <bsd.port.mk>
