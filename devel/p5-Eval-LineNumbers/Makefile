# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Eval-LineNumbers/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	Eval-LineNumbers
PORTVERSION=	0.31
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MUIR/modules
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Add line numbers to hereis blocks that contain perl source code

USE_PERL5=	configure
USES=		perl5

MAN3=		Eval::LineNumbers.3

post-patch:
	@${REINPLACE_CMD} -e 's|Eval-LineNumbers|Eval::LineNumbers|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
