# New ports collection makefile for:	p5-Pod-Xhtml
# Date created:		2006-07-13
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/textproc/p5-Pod-Xhtml/Makefile,v 1.7 2012/11/17 06:02:07 svnexp Exp $
#

PORTNAME=	Pod-Xhtml
PORTVERSION=	1.61
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate well-formed XHTML documents from POD format documentation

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Assertions>0:${PORTSDIR}/devel/p5-Test-Assertions

PERL_CONFIGURE=	yes

MAN1=		pod2xhtml.1
MAN3=		Pod::Hyperlink::BounceURL.3 Pod::Xhtml.3

.include <bsd.port.mk>
