# Created by: Brooks Davis <brooks@freebsd.org>
# $FreeBSD: ports/www/trac-mercurial/Makefile,v 1.10 2012/11/17 06:03:08 svnexp Exp $

PORTNAME=	${PYDISTUTILS_PKGNAME:S;^Trac;;:tl}
PORTVERSION=	0.12.0.1
PORTREVISION=	1
CATEGORIES=	www devel python
MASTER_SITES=	LOCAL/pgollucci
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}
DIST_SUBDIR=	trac

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	Plugin to use Mercurial instead of Subversion in Trac

RUN_DEPENDS+=	hg:${PORTSDIR}/devel/mercurial \
		tracd:${PORTSDIR}/www/trac

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracMercurial
PYDISTUTILS_PKGVERSION=	0.12.0.23dev
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.if defined(BOOTSTRAP)
do-fetch:
	${MKDIR} ${WRKDIR}
	svn export http://svn.edgewall.org/repos/trac/plugins/0.12/mercurial-plugin ${WRKSRC}
	${MKDIR} ${_DISTDIR}
	cd ${WRKDIR} && \
	    tar cfvz ${_DISTDIR}/${DISTNAME}.tar.gz ${DISTNAME}
.endif

.include <bsd.port.mk>
