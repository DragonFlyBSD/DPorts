# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: mail/p5-Mail-MboxParser/Makefile 338797 2014-01-05 16:33:44Z az $

PORTNAME=	Mail-MboxParser
PORTVERSION=	0.55
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Module for working with UNIX-flavoured mailboxes

BUILD_DEPENDS=	p5-MIME-Tools>=0:${PORTSDIR}/mail/p5-MIME-Tools \
		p5-Mail-Mbox-MessageParser>=0:${PORTSDIR}/mail/p5-Mail-Mbox-MessageParser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
