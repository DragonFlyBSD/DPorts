# New ports collection makefile for:   p5-Net-SMTP-Server
# Date created:                22 March 2002
# Whom:                        Kimura Fuyuki <fuyuki@mj.0038.net>
#
# $FreeBSD: ports/mail/p5-Net-SMTP-Server/Makefile,v 1.14 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Net-SMTP-Server
PORTVERSION=	1.1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	SMTP-Server-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A native Perl SMTP Server

BUILD_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

MASTER_SITE_BACKUP+=	http://www.macgyver.org/software/perl/

PERL_CONFIGURE=	yes

MAN3=		Net::SMTP::Server.3 \
		Net::SMTP::Server::Client.3 \
		Net::SMTP::Server::Relay.3

.include <bsd.port.mk>
