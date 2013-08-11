# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-IO-AIO/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	IO-AIO
PORTVERSION=	4.18
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Asynchronous Input/Output

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense
RUN_DEPENDS=	p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense

USES=		perl5
USE_PERL5=	configure

MAN3=		IO::AIO.3

.include <bsd.port.mk>
