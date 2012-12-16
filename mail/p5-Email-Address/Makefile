# New ports collection makefile for:	p5-Email-Address
# Date created:				2004-08-29
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/mail/p5-Email-Address/Makefile,v 1.20 2012/11/17 05:59:07 svnexp Exp $
#

PORTNAME=	Email-Address
PORTVERSION=	1.89.5
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RFC 2822 Address Parsing and Creation

TEST_DEPENDS=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple

PERL_CONFIGURE=	yes

MAN3=		Email::Address.3

.include <bsd.port.mk>
