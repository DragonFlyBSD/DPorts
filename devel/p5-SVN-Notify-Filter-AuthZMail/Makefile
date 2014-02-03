# Created by: glarkin@
# $FreeBSD: devel/p5-SVN-Notify-Filter-AuthZMail/Makefile 341710 2014-01-29 10:33:57Z az $

PORTNAME=	SVN-Notify-Filter-AuthZMail
PORTVERSION=	1.01
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Determines Subversion accounts to receive email via the authz file

RUN_DEPENDS=	p5-SVN-Notify>=2.72:${PORTSDIR}/devel/p5-SVN-Notify \
		p5-SVN-Access>=0:${PORTSDIR}/devel/p5-SVN-Access
BUILD_DEPENDS=	p5-SVN-Notify>=2.72:${PORTSDIR}/devel/p5-SVN-Notify \
		p5-SVN-Access>=0:${PORTSDIR}/devel/p5-SVN-Access

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
