# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: mail/p5-URI-imap/Makefile 327742 2013-09-20 19:59:12Z bapt $

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

MAN3=	URI::imap.3

NO_STAGE=	yes
.include <bsd.port.mk>
