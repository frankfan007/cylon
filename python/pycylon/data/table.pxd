##
 # Licensed under the Apache License, Version 2.0 (the "License");
 # you may not use this file except in compliance with the License.
 # You may obtain a copy of the License at
 #
 # http://www.apache.org/licenses/LICENSE-2.0
 #
 # Unless required by applicable law or agreed to in writing, software
 # distributed under the License is distributed on an "AS IS" BASIS,
 # WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 # See the License for the specific language governing permissions and
 # limitations under the License.
 ##

from libcpp.memory cimport shared_ptr, make_shared
from libcpp.string cimport string
from pycylon.common.status cimport _Status
from pytwisterx.common.status import Status
from libcpp.memory cimport unique_ptr

# cdef extern from "../../../cpp/src/twisterx/table.hpp" namespace "twisterx":
#     cdef cppclass _Table "twisterx::Table":
#         _Table()
#         _Table(string)
#         int columns()
#         int rows()
#         void clear()
#         void tb_print()
#         _Status from_csv(const string, const char)

