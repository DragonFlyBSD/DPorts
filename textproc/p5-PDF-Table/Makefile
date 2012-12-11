# New Ports collection makefile for:	p5-PDF-Table
# Date created:				May 22, 2009
# Whom:					scheidell@secnap.net
#
# $FreeBSD: ports/textproc/p5-PDF-Table/Makefile,v 1.6 2012/11/17 06:02:06 svnexp Exp $
#

PORTNAME=	PDF-Table
PORTVERSION=	0.9.5
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	scheidell@freebsd.org
COMMENT=	A utility class for building table layouts in a PDF::API2 object

BUILD_DEPENDS=	p5-PDF-API2>=0:${PORTSDIR}/textproc/p5-PDF-API2
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		PDF::Table.3

.include <bsd.port.mk>
