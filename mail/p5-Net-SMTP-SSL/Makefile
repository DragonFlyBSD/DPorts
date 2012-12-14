# Created by: Wesley Shields <wxs@FreeBSD.org>
# $FreeBSD: ports/mail/p5-Net-SMTP-SSL/Makefile,v 1.9 2012/11/17 05:59:09 svnexp Exp $

PORTNAME=	Net-SMTP-SSL
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	An SMTP client supporting SSL

BUILD_DEPENDS=	p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL

PERL_CONFIGURE=	yes

MAN3=		Net::SMTP::SSL.3

.include <bsd.port.mk>
