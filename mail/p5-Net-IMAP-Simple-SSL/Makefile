# New ports collection makefile for:	mail/p5-Net-IMAP-Simple-SSL
# Date created:				30 December 2004
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/mail/p5-Net-IMAP-Simple-SSL/Makefile,v 1.5 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Net-IMAP-Simple-SSL
PORTVERSION=	1.3
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	SSL support for Net::IMAP::Simple

BUILD_DEPENDS=	p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL \
		p5-Net-IMAP-Simple>=0:${PORTSDIR}/mail/p5-Net-IMAP-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Net::IMAP::Simple::SSL.3

.include <bsd.port.mk>
