# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: mail/p5-URI-imap/Makefile 338797 2014-01-05 16:33:44Z az $

PORTNAME=	URI-imap
PORTVERSION=	1.01
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	URI::imap - Support IMAP URI

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
