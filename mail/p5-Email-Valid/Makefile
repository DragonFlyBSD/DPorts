# New ports collection makefile for:	mail/p5-Email-Valid
# Date created:				28 December 2000
# Whom:					Anton Berezin <tobez@tobez.org>
#
# $FreeBSD: ports/mail/p5-Email-Valid/Makefile,v 1.29 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	Email-Valid
PORTVERSION=	0.190
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Check validity of Internet email addresses

COMMON_DEPENDS=	p5-Net-DNS>0:${PORTSDIR}/dns/p5-Net-DNS \
		p5-Mail-Tools>0:${PORTSDIR}/mail/p5-Mail-Tools \
		p5-Net-Domain-TLD>0:${PORTSDIR}/dns/p5-Net-Domain-TLD
BUILD_DEPENDS=	${COMMON_DEPENDS}
RUN_DEPENDS=	${COMMON_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Email::Valid.3

.include <bsd.port.mk>
