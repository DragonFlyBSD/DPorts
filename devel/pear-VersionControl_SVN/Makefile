# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: devel/pear-VersionControl_SVN/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	VersionControl_SVN
PORTVERSION=	0.5.0
CATEGORIES=	devel pear

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Wrapper interface for the Subversion command-line client

BUILD_DEPENDS=	pear>=1.9.4:${PORTSDIR}/devel/pear \
		pear-XML_Parser>=1.3.4:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS=	pear>=1.9.4:${PORTSDIR}/devel/pear \
		pear-XML_Parser>=1.3.4:${PORTSDIR}/devel/pear-XML_Parser

USE_PHP=	yes
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
